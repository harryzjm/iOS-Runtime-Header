//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PUSearchZeroKeywordBaseViewModel : NSObject
{
    long long _itemType;
    NSString *_title;
    id _representedObject;
    id _displayInfo;
}

@property(readonly, nonatomic) id displayInfo; // @synthesize displayInfo=_displayInfo;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *debugDictionary;
- (id)description;
- (id)initWithType:(long long)arg1 title:(id)arg2 representedObject:(id)arg3 displayInfo:(id)arg4;

@end

