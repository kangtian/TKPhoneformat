//
//  TKPhoneTextField.h
//  TKPhoneTextFieldDemo
//
//  Created by pro1 on 17/9/12.
//  Copyright © 2017年 kangshifu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TKPhoneTextField : UITextField<UITextFieldDelegate>
{
    NSString    *_previousTextFieldContent;
    UITextRange *_previousSelection;
}
@end
