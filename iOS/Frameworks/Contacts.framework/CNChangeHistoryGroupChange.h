//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class CNChangeHistoryAnchor, CNGroup, NSString;

@interface CNChangeHistoryGroupChange : NSObject <NSSecureCoding>
{
    NSString *_groupIdentifier;
    long long _changeType;
    CNGroup *_group;
    CNChangeHistoryAnchor *_changeAnchor;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CNChangeHistoryAnchor *changeAnchor; // @synthesize changeAnchor=_changeAnchor;
@property(retain, nonatomic) CNGroup *group; // @synthesize group=_group;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3;

@end

