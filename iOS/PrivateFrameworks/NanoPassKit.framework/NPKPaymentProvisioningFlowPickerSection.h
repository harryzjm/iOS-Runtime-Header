//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NPKPaymentProvisioningFlowPickerSection : NSObject
{
    NSString *_title;
    NSString *_footer;
    NSMutableArray *_items;
}

+ (id)sectionWithTitle:(id)arg1 footer:(id)arg2;
+ (id)sectionWithTitle:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;

@end
