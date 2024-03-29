//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISConcreteIcon, NSArray;

__attribute__((visibility("hidden")))
@interface ISAliasIcon
{
    ISConcreteIcon *_icon;
    NSArray *_decorations;
    id _alias;
    ISConcreteIcon *_resolvedIcon;
}

+ (id)aliasUUID;
+ (_Bool)supportsSecureCoding;
+ (id)_iconForValues:(id)arg1;
+ (id)_iconForBookmarkData:(id)arg1;
- (void).cxx_destruct;
@property(readonly) ISConcreteIcon *resolvedIcon; // @synthesize resolvedIcon=_resolvedIcon;
@property(readonly) id alias; // @synthesize alias=_alias;
- (id)decorations;
- (id)makeResourceProvider;
@property(readonly) ISConcreteIcon *icon; // @synthesize icon=_icon;
- (void)resolve;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBookmarkData:(id)arg1 decorations:(id)arg2;
- (id)initWithBookmarkData:(id)arg1;
- (id)initWithAliasURL:(id)arg1;

@end

