//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VNWarningRecorder : NSObject
{
    NSMutableDictionary *_warnings;
}

- (void).cxx_destruct;
- (void)recordWarnings:(id)arg1;
- (void)setWarnings:(id)arg1;
- (_Bool)hasWarnings;
- (id)warnings;
- (id)valueForWarning:(id)arg1;
- (void)recordWarning:(id)arg1 value:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

