//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingRowItem : NSObject
{
    _Bool _isSelected;
    NSString *_label;
    UIView *_accessoryView;
    CDUnknownBlockType _confirmationHandler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType confirmationHandler; // @synthesize confirmationHandler=_confirmationHandler;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (id)initWithLabel:(id)arg1 accessoryView:(id)arg2 confirmationHandler:(CDUnknownBlockType)arg3;
- (id)initWithLabel:(id)arg1 accessoryView:(id)arg2;

@end
