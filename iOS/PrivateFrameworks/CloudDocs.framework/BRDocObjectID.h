//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface BRDocObjectID
{
    unsigned int _docID;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isDocumentID;
- (id)documentID;
- (unsigned long long)rawID;
- (id)asString;
- (id)description;
- (id)initWithDocID:(unsigned int)arg1;
- (id)initWithDocIDNumber:(id)arg1;

@end
