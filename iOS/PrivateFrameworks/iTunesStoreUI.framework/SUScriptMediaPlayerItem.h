//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, SUMediaPlayerItem;

@interface SUScriptMediaPlayerItem
{
    SUMediaPlayerItem *_mediaItem;
}

+ (id)webScriptNameForKey:(const char *)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(copy) NSString *URL;
@property(copy) NSString *title;
@property(copy) NSString *subtitle;
@property(retain) NSNumber *playableDuration;
@property(copy) NSString *itemType;
@property(retain) NSNumber *itemIdentifier;
@property(copy) NSString *initialOrientation;
@property(copy) NSString *bookmarkIdentifier;
@property(copy) NSString *backgroundImageURL;
- (id)_className;
- (id)copyNativeMediaPlayerItem;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end
