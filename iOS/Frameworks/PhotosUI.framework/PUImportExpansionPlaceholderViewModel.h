//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface PUImportExpansionPlaceholderViewModel
{
    NSDate *_placeholderDate;
    id _placeholderUUID;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id placeholderUUID; // @synthesize placeholderUUID=_placeholderUUID;
@property(readonly, nonatomic) NSDate *placeholderDate; // @synthesize placeholderDate=_placeholderDate;
- (void).cxx_destruct;
- (long long)badgeType;
- (id)fileCreationDate;
- (id)fileName;
- (id)uuid;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToImportPlaceholderViewModel:(id)arg1;
- (id)description;
- (id)initWithPlaceholderDate:(id)arg1;

@end

