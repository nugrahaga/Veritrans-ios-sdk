//
//  VTClickpayController.h
//  MidtransKit
//
//  Created by Nanang Rafsanjani on 2/29/16.
//  Copyright © 2016 Veritrans. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MidtransUIPaymentController.h"

@interface VTMandiriClickpayController : MidtransUIPaymentController
@property (weak, nonatomic) IBOutlet UIView *keyTokenView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *keyTokeViewHeightConstraints;

@end
