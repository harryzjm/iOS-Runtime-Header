//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SearchUIAvatarImage
{
    NSString *_contactIdentifier;
    NSString *_monogramLetters;
}

+ (id)avatarImageRenderer;
@property(retain) NSString *monogramLetters; // @synthesize monogramLetters=_monogramLetters;
@property(retain) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (void).cxx_destruct;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithContactImage:(id)arg1;
- (id)initWithMonogramImage:(id)arg1;

@end
