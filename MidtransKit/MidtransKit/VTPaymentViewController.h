//
//  VTPaymentViewController.h
//  MidtransKit
//
//  Created by Nanang Rafsanjani on 2/25/16.
//  Copyright © 2016 Veritrans. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MidtransCoreKit/VTItem.h>
#import <MidtransCoreKit/VTItem.h>
#import <MidtransCoreKit/VTConfig.h>
#import <MidtransCoreKit/VTCustomerDetails.h>
#import <MidtransCoreKit/VTMerchantClient.h>
#import <MidtransCoreKit/VTMandiriClickpay.h>

@interface VTPaymentViewController : UINavigationController

+ (instancetype)controllerWithCustomer:(VTCustomerDetails *)customer andItems:(NSArray <VTItem *> *)items;

@end
