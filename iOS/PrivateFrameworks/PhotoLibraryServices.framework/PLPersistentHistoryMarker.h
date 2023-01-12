//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLPersistentHistoryMarkerOverrides-Protocol.h>

@class NSString;

@interface PLPersistentHistoryMarker : NSObject <PLPersistentHistoryMarkerOverrides>
{
}

+ (id)markerWithTransaction:(id)arg1;
+ (id)markerWithDate:(id)arg1;
+ (id)markerWithToken:(id)arg1;
@property(readonly, copy) NSString *shortDescription;
- (id)changeRequestForFetching;
- (id)overrride_shortDescription;
- (id)overrride_changeRequestForFetching;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
