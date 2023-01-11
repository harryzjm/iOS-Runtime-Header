//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/PKMetalResource-Protocol.h>

@class NSString;
@protocol MTLBuffer;

@interface PKMetalBuffer : NSObject <PKMetalResource>
{
    unsigned long long _lockCount;
    _Atomic int _isPurged;
    id <MTLBuffer> _metalBuffer;
}

@property(readonly, nonatomic) id <MTLBuffer> metalBuffer; // @synthesize metalBuffer=_metalBuffer;
- (void).cxx_destruct;
- (_Bool)isPurged;
- (void)unlock;
- (_Bool)lock;
- (id)initWithDevice:(id)arg1 length:(unsigned long long)arg2 bytes:(const void *)arg3 options:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

