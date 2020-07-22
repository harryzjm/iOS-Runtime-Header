//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/CHDMarkerOwner-Protocol.h>

@class CHDMarker, NSString;

__attribute__((visibility("hidden")))
@interface CHDLineSeries <CHDMarkerOwner>
{
    CHDMarker *mMarker;
    _Bool mSmooth;
}

- (void)setSmooth:(_Bool)arg1;
- (_Bool)isSmooth;
- (void)setMarker:(id)arg1;
- (id)marker;
- (void)dealloc;
- (id)initWithChart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

