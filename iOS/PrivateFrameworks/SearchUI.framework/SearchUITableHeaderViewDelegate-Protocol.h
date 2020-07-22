//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NSObject-Protocol.h>

@class NSString, SFResultSection;

@protocol SearchUITableHeaderViewDelegate <NSObject>
@property(readonly) NSString *currentQueryString;
- (void)toggleExpansionForSection:(SFResultSection *)arg1;
- (_Bool)sectionIsClearable:(SFResultSection *)arg1;
- (void)clearResultsFromSection:(SFResultSection *)arg1;
@end

