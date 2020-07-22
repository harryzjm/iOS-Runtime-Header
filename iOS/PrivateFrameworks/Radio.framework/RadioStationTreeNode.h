//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>
#import <Radio/NSMutableCopying-Protocol.h>

@class NSArray, NSDictionary, NSString, RadioArtworkCollection;

@interface RadioStationTreeNode : NSObject <NSCopying, NSMutableCopying>
{
    RadioArtworkCollection *_artworkCollection;
    long long _childNodeLoadingStyle;
    NSArray *_childNodes;
    long long _displayStyle;
    _Bool _hasAdditionalChildNodes;
    NSString *_name;
    long long _nodeID;
    NSDictionary *_stationDictionary;
    NSDictionary *_stationTreeNodeDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *stationTreeNodeDictionary; // @synthesize stationTreeNodeDictionary=_stationTreeNodeDictionary;
@property(readonly, copy, nonatomic) NSDictionary *stationDictionary; // @synthesize stationDictionary=_stationDictionary;
@property(readonly, nonatomic) long long nodeID; // @synthesize nodeID=_nodeID;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) _Bool hasAdditionalChildNodes; // @synthesize hasAdditionalChildNodes=_hasAdditionalChildNodes;
@property(readonly, nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(readonly, copy, nonatomic) NSArray *childNodes; // @synthesize childNodes=_childNodes;
@property(readonly, nonatomic) long long childNodeLoadingStyle; // @synthesize childNodeLoadingStyle=_childNodeLoadingStyle;
@property(readonly, copy, nonatomic) RadioArtworkCollection *artworkCollection; // @synthesize artworkCollection=_artworkCollection;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStationTreeNodeDictionary:(id)arg1;

@end

