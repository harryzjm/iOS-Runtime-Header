//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFShareShortcutEvent
{
    int _source;
    unsigned int _actionCount;
    NSString *_key;
    NSString *_sharingMode;
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryIdentifier;
    NSString *_sharingDestinationBundleIdentifier;
}

+ (id)serializablePropertyTransformers;
+ (Class)codableEventClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sharingDestinationBundleIdentifier; // @synthesize sharingDestinationBundleIdentifier=_sharingDestinationBundleIdentifier;
@property(copy, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property(copy, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(copy, nonatomic) NSString *sharingMode; // @synthesize sharingMode=_sharingMode;
@property(nonatomic) int source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end
