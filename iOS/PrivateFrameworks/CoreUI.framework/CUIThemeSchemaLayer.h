//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CUIThemeSchemaLayer : NSObject
{
    NSArray *_renditions;
    NSString *_name;
    unsigned long long _index;
}

+ (id)layerWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *renditions; // @synthesize renditions=_renditions;
- (void)calculateColumLefts:(id *)arg1 rowTops:(id *)arg2 totalSize:(struct CGSize *)arg3 forPartFeatures:(unsigned long long)arg4;
- (double)translateFromWidthsOrHeightsToLeftsOrTops:(id)arg1 leftsOrTops:(id *)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;

@end
