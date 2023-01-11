//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/OADClient-Protocol.h>

@class CHDAnchor, NSString;

__attribute__((visibility("hidden")))
@interface CHDOfficeArtClient : NSObject <OADClient>
{
    CHDAnchor *mAnchor;
}

- (void).cxx_destruct;
- (struct CGRect)bounds;
- (_Bool)hasBounds;
- (void)setAnchor:(id)arg1;
- (id)anchor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
