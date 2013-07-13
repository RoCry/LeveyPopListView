Pod::Spec.new do |s|
  s.name         = "LeveyPopListView"
  s.version      = "0.1"
  s.summary      = "When your app have so many options to choose, LeveyPopListView is an alternative of UIActionSheet, hope it can help someone :)"
  s.homepage     = "https://github.com/levey/LeveyPopListView"
  s.author       = { "Levey" => "levey.zhu@gmail.com" }
  s.source       = { :git => "https://github.com/RoCry/LeveyPopListView.git", :tag => "0.1" }
  s.source_files = 'LeveyPopListView/*.{h,m}'
  s.ios.frameworks = 'QuartzCore', 'CoreGraphics'
  s.requires_arc = true
end