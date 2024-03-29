//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DVTPrimitiveFileDataType
{
    unsigned long long _number;
    NSString *_identifier;
    NSString *_displayName;
}

- (void).cxx_destruct;
- (id)description;
- (id)stringRepresentation;
- (id)secondaryFileDataTypes;
- (id)primaryFileDataType;
- (id)displayName;
- (id)identifier;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 conformingToTypes:(id)arg3;

@end

