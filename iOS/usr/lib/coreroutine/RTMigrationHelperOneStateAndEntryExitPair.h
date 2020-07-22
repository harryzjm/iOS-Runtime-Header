//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RTStateModelEntryExit, RTStateModelOneState;

@interface RTMigrationHelperOneStateAndEntryExitPair : NSObject
{
    RTStateModelOneState *_oneState;
    RTStateModelEntryExit *_entryExit;
}

@property(retain, nonatomic) RTStateModelEntryExit *entryExit; // @synthesize entryExit=_entryExit;
@property(retain, nonatomic) RTStateModelOneState *oneState; // @synthesize oneState=_oneState;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOneState:(id)arg1 entryExit:(id)arg2;

@end

