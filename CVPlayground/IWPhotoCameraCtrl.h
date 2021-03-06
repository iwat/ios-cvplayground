//
//  IWPhotoCameraCtrl.h
//  CVPlayground
//
//  Created by iwat on 11/11/15.
//  Copyright © 2015 Chaiwat Shuetrakoonpaiboon (iwat). All rights reserved.
//
//  Use of this source code is governed by MIT license that can be found in the
//  LICENSE file.
//

#import <UIKit/UIKit.h>

@interface IWPhotoCameraCtrl : UIViewController

@property (weak) IBOutlet UIView *previewView;

- (IBAction)takePicture;

@end
