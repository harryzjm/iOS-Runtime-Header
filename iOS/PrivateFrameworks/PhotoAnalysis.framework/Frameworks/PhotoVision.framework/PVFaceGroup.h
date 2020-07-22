//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PVFaceGroup
{
    long long _personModelId;
    long long _personBuilderState;
    NSString *_personLocalIdentifier;
    NSString *_representativeFaceLocalIdentifier;
    NSArray *_faces;
}

@property(retain, nonatomic) NSArray *faces; // @synthesize faces=_faces;
@property(copy, nonatomic) NSString *representativeFaceLocalIdentifier; // @synthesize representativeFaceLocalIdentifier=_representativeFaceLocalIdentifier;
@property(copy, nonatomic) NSString *personLocalIdentifier; // @synthesize personLocalIdentifier=_personLocalIdentifier;
@property(nonatomic) long long personBuilderState; // @synthesize personBuilderState=_personBuilderState;
@property(nonatomic) long long personModelId; // @synthesize personModelId=_personModelId;
- (void).cxx_destruct;
- (id)description;
- (void)_setPropertiesFrom:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFaceGroup:(id)arg1;

@end

