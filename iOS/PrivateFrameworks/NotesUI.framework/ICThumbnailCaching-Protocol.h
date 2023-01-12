//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICThumbnailConfiguration, ICThumbnailDescription, NSDate, NSSet;

@protocol ICThumbnailCaching
- (void)invalidateForObjectIdentifiers:(NSSet *)arg1;
- (NSDate *)creationDateFor:(ICThumbnailConfiguration *)arg1;
- (void)setObject:(ICThumbnailDescription *)arg1 forKeyedSubscript:(ICThumbnailConfiguration *)arg2;
- (ICThumbnailDescription *)objectForKeyedSubscript:(ICThumbnailConfiguration *)arg1;
@end

