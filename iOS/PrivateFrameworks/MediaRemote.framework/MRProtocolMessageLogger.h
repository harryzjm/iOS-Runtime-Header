//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface MRProtocolMessageLogger : NSObject
{
    int _token;
    _Bool _shouldLog;
}

+ (id)sharedLogger;
@property(nonatomic) _Bool shouldLog; // @synthesize shouldLog=_shouldLog;
- (void)logMessage:(id)arg1 protocolMessage:(id)arg2;
- (void)dealloc;
- (id)init;

@end
