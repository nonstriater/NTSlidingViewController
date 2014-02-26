
# NTSlidingViewController

NTSlidingViewController is right-and-left sliding view controller container.It's created just for fun.


## Requiredments

* ARC
* Xcode 5 or higher
* Apple LLVM compiler
* iOS 6.0 or higher


## Installation

All you need to do is drop `NTSlidingViewController` files into your project, and add `#include "NTSlidingViewController.h"` to the top of classes that will use it.


## Example Usage


In your AppDelegate's `- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions` create the sliding view controller and assign child view controllers.

``` objective-c
// Create sliding view controller and childs view controllers

 NTSlidingViewController *sliding = [[NTSlidingViewController alloc] initSlidingViewControllerWithTitle:@"推荐" viewController:vc1];
[sliding addControllerWithTitle:@"精选集" viewController:vc2];
[sliding addControllerWithTitle:@"排行榜" viewController:vc3];
[sliding addControllerWithTitle:@"专辑" viewController:vc4];
[sliding addControllerWithTitle:@"艺人" viewController:vc5];

// Make it a root controller
self.window.rootViewController = sideMenuViewController;
```

you can alse configure the select and unselect color for sliding view controller:

``` objective-c

sliding.selectedLabelColor = [UIColor magentaColor];
sliding.unselectedLabelColor = [UIColor redColor];

```


## Contact

@Nonstriater

- https://twitter.com/nonstriater
- http://weibo.com/ranwj  
- http://github.com/nonstriater
- http://nonstriater.github.io
- nonstriater@qq.com


## Licence

NTSlidingViewContrller is available under the MIT license.

Copyright © 2014 @Nonstriater.

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.