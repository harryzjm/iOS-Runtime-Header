//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/MSPHistoryEntry-Protocol.h>

@class GEOMapRegion, NSString;

@protocol MSPHistoryEntrySearch <MSPHistoryEntry>
- (GEOMapRegion *)mapRegion;
- (NSString *)languageCode;
- (NSString *)locationDisplayString;
- (NSString *)query;
@end

