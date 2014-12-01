Pod::Spec.new do |spec|
  spec.name         = 'FayeObjC'
  spec.version      = '2.0'
  spec.license      = 'MIT'
  spec.summary      = 'An Faye Objective-C client'
  spec.homepage     = 'https://github.com/stanislav-boychev/FayeObjC'
  spec.author       = 'pcrawfor'
  spec.source       = { :git => 'https://github.com/stanislav-boychev/FayeObjC.git' }
  spec.source_files = 'lib, src, FayeObjCLibrary, FayeObjCFramework}/**/*'
  spec.requires_arc = true
  spec.dependency 'SocketRocket'
end
