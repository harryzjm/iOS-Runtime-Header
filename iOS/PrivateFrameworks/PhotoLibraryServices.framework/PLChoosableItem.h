//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLChoosableItem : NSObject
{
    int _type;
    long long _width;
    long long _height;
    NSString *_uniformTypeIdentifier;
}

+ (id)choosableItemsFromCloudResources:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) long long height; // @synthesize height=_height;
@property(readonly, nonatomic) long long width; // @synthesize width=_width;
- (long long)compareUsingWidth:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToChoosableItem:(id)arg1;
- (id)description;
- (id)initWithCloudResource:(id)arg1;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2 type:(int)arg3 uniformTypeIdentifier:(id)arg4;

@end
