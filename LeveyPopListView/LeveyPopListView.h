//
//  LeveyPopListView.h
//  LeveyPopListViewDemo
//
//  Created by Levey on 2/21/12.
//  Copyright (c) 2012 Levey. All rights reserved.
//


@protocol LeveyPopListViewDelegate;
@interface LeveyPopListView : UIView <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) NSArray *options;
@property (nonatomic, weak) id<LeveyPopListViewDelegate> delegate;
@property (nonatomic, copy) void(^clickedBlock)(NSInteger anIndex);
@property (nonatomic, copy) void(^dismissBlock)();

// The options is a NSArray, contain some NSDictionaries, the NSDictionary contain 2 keys, one is "img", another is "text".
- (id)initWithTitle:(NSString *)aTitle options:(NSArray *)aOptions;
- (id)initWithTitle:(NSString *)aTitle 
            options:(NSArray *)aOptions 
            handler:(void (^)(NSInteger index))aHandlerBlock;
- (id)initWithTitle:(NSString *)aTitle
            options:(NSArray *)aOptions
            clicked:(void (^)(NSInteger anIndex))clickedBlock
            dismiss:(void (^)())dismissBlock;

// If animated is YES, PopListView will be appeared with FadeIn effect.
- (void)showInView:(UIView *)aView animated:(BOOL)animated;
@end

@protocol LeveyPopListViewDelegate <NSObject>
- (void)leveyPopListView:(LeveyPopListView *)popListView didSelectedIndex:(NSInteger)anIndex;
@optional
- (void)leveyPopListViewDidCancel;
@end