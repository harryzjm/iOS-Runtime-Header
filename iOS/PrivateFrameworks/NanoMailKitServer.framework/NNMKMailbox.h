//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>
#import <NanoMailKitServer/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface NNMKMailbox : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _syncEnabled;
    _Bool _syncRequested;
    _Bool _syncActive;
    _Bool _hasSelection;
    unsigned long long _type;
    unsigned long long _filterType;
    NSString *_mailboxId;
    NSString *_accountId;
    NSURL *_url;
    NSString *_customName;
}

+ (unsigned long long)syncedTypeFromFilterType:(unsigned long long)arg1;
+ (unsigned long long)syncedTypeFromMailbox:(id)arg1;
+ (unsigned long long)messageStateForMailboxFilterType:(unsigned long long)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)idsFromMailboxes:(id)arg1;
@property(nonatomic) _Bool hasSelection; // @synthesize hasSelection=_hasSelection;
@property(nonatomic) _Bool syncActive; // @synthesize syncActive=_syncActive;
@property(nonatomic) _Bool syncRequested; // @synthesize syncRequested=_syncRequested;
@property(nonatomic) _Bool syncEnabled; // @synthesize syncEnabled=_syncEnabled;
@property(retain, nonatomic) NSString *customName; // @synthesize customName=_customName;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *mailboxId; // @synthesize mailboxId=_mailboxId;
@property(nonatomic) unsigned long long filterType; // @synthesize filterType=_filterType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)resetURL;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)hasCompoundFilters;
- (void)removeFilterType:(unsigned long long)arg1;
- (void)addFilterType:(unsigned long long)arg1;
- (_Bool)hasFilterType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasAnyFilter;
- (_Bool)isSelectedForFilterType:(unsigned long long)arg1;
@property(nonatomic, getter=isSelected) _Bool selected;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFilterType:(unsigned long long)arg1;
- (id)init;

@end
