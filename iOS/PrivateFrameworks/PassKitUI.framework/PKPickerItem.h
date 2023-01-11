//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PKPaymentSetupProduct;

@interface PKPickerItem : NSObject
{
    NSString *_title;
    PKPaymentSetupProduct *_product;
    CDUnknownBlockType _selectionHandler;
}

+ (id)itemWithProduct:(id)arg1 selectionHandler:(CDUnknownBlockType)arg2;
+ (id)itemWithTitle:(id)arg1 selectionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)handleSelectionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

