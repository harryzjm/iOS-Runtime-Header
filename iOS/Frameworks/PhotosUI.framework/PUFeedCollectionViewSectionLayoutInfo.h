//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PUFeedCollectionViewSectionLayoutInfo : NSObject
{
    _Bool _hidden;
    NSArray *_fixedLayoutAttributes;
    NSArray *_tileLayoutAttributes;
    NSArray *_floatingLayoutAttributes;
    long long _sectionType;
    long long _previousVisibleSection;
    long long _nextVisibleSection;
    long long _firstJoinedSection;
    long long _lastJoinedSection;
    id _groupID;
    long long _numberOfTilesOmitted;
    struct CGPoint _origin;
    struct CGSize _size;
    struct CGSize _headerSize;
    struct CGSize _footerSize;
    struct UIEdgeInsets _margins;
}

@property(nonatomic) long long numberOfTilesOmitted; // @synthesize numberOfTilesOmitted=_numberOfTilesOmitted;
@property(retain, nonatomic) id groupID; // @synthesize groupID=_groupID;
@property(nonatomic) long long lastJoinedSection; // @synthesize lastJoinedSection=_lastJoinedSection;
@property(nonatomic) long long firstJoinedSection; // @synthesize firstJoinedSection=_firstJoinedSection;
@property(nonatomic) long long nextVisibleSection; // @synthesize nextVisibleSection=_nextVisibleSection;
@property(nonatomic) long long previousVisibleSection; // @synthesize previousVisibleSection=_previousVisibleSection;
@property(nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSArray *floatingLayoutAttributes; // @synthesize floatingLayoutAttributes=_floatingLayoutAttributes;
@property(retain, nonatomic) NSArray *tileLayoutAttributes; // @synthesize tileLayoutAttributes=_tileLayoutAttributes;
@property(retain, nonatomic) NSArray *fixedLayoutAttributes; // @synthesize fixedLayoutAttributes=_fixedLayoutAttributes;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) struct CGSize footerSize; // @synthesize footerSize=_footerSize;
@property(nonatomic) struct CGSize headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect frame;
- (id)init;

@end

