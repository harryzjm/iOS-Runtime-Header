//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMKTimelapseState, NSArray, NSString;

@interface CMKTimelapseBackendSessionContext : NSObject
{
    NSString *_timelapseUUID;
    CMKTimelapseState *_state;
    NSArray *_filesToDelete;
    NSArray *_filesToWrite;
}

@property(retain, nonatomic) NSArray *filesToWrite; // @synthesize filesToWrite=_filesToWrite;
@property(retain, nonatomic) NSArray *filesToDelete; // @synthesize filesToDelete=_filesToDelete;
@property(retain, nonatomic) CMKTimelapseState *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *timelapseUUID; // @synthesize timelapseUUID=_timelapseUUID;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithTimelapseUUID:(id)arg1;

@end
