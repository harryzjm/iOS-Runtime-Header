//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSProcessInfo;

@interface CNSuddenTerminationInhibitor : NSObject
{
    NSProcessInfo *_processInfo;
}

@property(retain, nonatomic) NSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithProcessInfo:(id)arg1;
- (id)init;

@end

