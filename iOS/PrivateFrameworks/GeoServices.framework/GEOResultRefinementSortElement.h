//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDResultRefinementMetadata, NSString;

@interface GEOResultRefinementSortElement : NSObject
{
    NSString *_displayName;
    GEOPDResultRefinementMetadata *_metadata;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GEOPDResultRefinementMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)convertToGEOPDResultRefinementSortElement;
- (id)initWithResultRefinementSortElement:(id)arg1;
- (id)initWithDisplayName:(id)arg1 metadata:(id)arg2;

@end
