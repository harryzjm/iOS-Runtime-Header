//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAMCaptureResponse : NSObject
{
    unsigned short _sessionIdentifier;
    long long _type;
}

@property(readonly, nonatomic) unsigned short sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void)releaseCachedImages;
- (id)initWithType:(long long)arg1 captureSession:(unsigned short)arg2;
- (id)init;

@end

