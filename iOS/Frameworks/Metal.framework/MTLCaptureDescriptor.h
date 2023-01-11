//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class NSURL;

@interface MTLCaptureDescriptor : NSObject <NSCopying>
{
    id _captureObject;
    long long _destination;
    NSURL *_outputURL;
}

@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(nonatomic) long long destination; // @synthesize destination=_destination;
@property(retain, nonatomic) id captureObject; // @synthesize captureObject=_captureObject;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
