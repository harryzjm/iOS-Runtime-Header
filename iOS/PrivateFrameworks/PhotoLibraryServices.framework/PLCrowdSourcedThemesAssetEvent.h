//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/BMStoreData-Protocol.h>

@class NSString;

@interface PLCrowdSourcedThemesAssetEvent : NSObject <BMStoreData>
{
    NSString *_uuid;
    unsigned int dataVersion;
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned int dataVersion; // @synthesize dataVersion;
- (id)serialize;
- (id)initWithUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
