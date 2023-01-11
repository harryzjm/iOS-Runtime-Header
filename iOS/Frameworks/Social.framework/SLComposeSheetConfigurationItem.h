//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SLComposeSheetConfigurationItemObserving;

@interface SLComposeSheetConfigurationItem : NSObject
{
    id <SLComposeSheetConfigurationItemObserving> _changeObserver;
    _Bool _valuePending;
    NSString *_title;
    NSString *_value;
    CDUnknownBlockType _tapHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(nonatomic) _Bool valuePending; // @synthesize valuePending=_valuePending;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)setChangeObserver:(id)arg1;
- (id)changeObserver;
- (id)init;

@end
