//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HelpKit/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface HLPHelpItem : NSObject <NSCopying>
{
    NSString *_decodedName;
    HLPHelpItem *_parent;
    long long _serverType;
    long long _level;
    NSURL *_iconURL;
    NSString *_name;
    NSString *_identifier;
}

@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) long long serverType; // @synthesize serverType=_serverType;
@property(nonatomic) __weak HLPHelpItem *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)debugDescription;
@property(readonly, nonatomic) NSString *decodedName;
- (id)initWithDictionary:(id)arg1 helpBookURL:(id)arg2 serverType:(long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

