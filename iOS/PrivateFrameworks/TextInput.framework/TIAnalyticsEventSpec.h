//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TIAnalyticsEventSpec : NSObject
{
    _Bool _isInputModeRequired;
    NSString *_name;
    NSArray *_fieldSpecs;
}

+ (id)eventSpecWithName:(id)arg1 inputModeRequired:(_Bool)arg2 fieldSpecs:(id)arg3;
+ (id)eventSpecWithName:(id)arg1 inputModeRequired:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *fieldSpecs; // @synthesize fieldSpecs=_fieldSpecs;
@property(readonly, nonatomic) _Bool isInputModeRequired; // @synthesize isInputModeRequired=_isInputModeRequired;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 inputModeRequired:(_Bool)arg2 fieldSpecs:(id)arg3;

@end
