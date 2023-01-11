//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLVideoResource-Protocol.h>

@class NSString;
@protocol PLResource;

@interface PLVideoInternalResource : NSObject <PLVideoResource>
{
    id <PLResource> _backingResource;
}

@property(readonly, nonatomic) id <PLResource> backingResource; // @synthesize backingResource=_backingResource;
- (void).cxx_destruct;
- (id)fileURLIfLocal;
- (_Bool)matchesOrExceedsQualityLevel:(unsigned int)arg1;
- (_Bool)isMediumHighQuality;
- (_Bool)isStreamable;
- (_Bool)isRemotelyAvailable;
- (_Bool)isPlayable;
- (_Bool)isLocallyGeneratable;
- (_Bool)isLocallyAvailable;
- (_Bool)isOriginalVideoComplement;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBackingResource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
