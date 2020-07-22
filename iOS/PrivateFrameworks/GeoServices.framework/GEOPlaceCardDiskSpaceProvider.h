//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODiskSpaceProvider-Protocol.h>

@class NSString;

@interface GEOPlaceCardDiskSpaceProvider : NSObject <GEODiskSpaceProvider>
{
}

- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;
- (int)minimumUrgency;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

