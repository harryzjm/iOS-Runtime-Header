//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MOApplication;

@interface MOEffectiveOptionalApplication : NSObject
{
    MOApplication *_value;
    MOApplication *_defaultValue;
}

- (void).cxx_destruct;
@property(readonly) MOApplication *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly) MOApplication *value; // @synthesize value=_value;
- (id)initWithValue:(id)arg1 defaultValue:(id)arg2;

@end
