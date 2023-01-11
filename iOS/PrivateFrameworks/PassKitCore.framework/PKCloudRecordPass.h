//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPass;

@interface PKCloudRecordPass
{
    PKPass *_pass;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void)applyCloudRecordObject:(id)arg1;
- (id)_descriptionWithIncludeItem:(_Bool)arg1;
- (id)description;
- (id)descriptionWithItem:(_Bool)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)item;

@end
