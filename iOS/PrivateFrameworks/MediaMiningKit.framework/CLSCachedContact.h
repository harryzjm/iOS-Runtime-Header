//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLSCachedContact : NSObject
{
    _Bool _hasPicture;
    NSString *_contactIdentifier;
    NSString *_classifiedPersonLocalIdentifierWithFaceModelID;
    double _updateTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) double updateTimestamp; // @synthesize updateTimestamp=_updateTimestamp;
@property(retain, nonatomic) NSString *classifiedPersonLocalIdentifierWithFaceModelID; // @synthesize classifiedPersonLocalIdentifierWithFaceModelID=_classifiedPersonLocalIdentifierWithFaceModelID;
@property(nonatomic) _Bool hasPicture; // @synthesize hasPicture=_hasPicture;
@property(retain, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (id)description;
- (id)init;

@end
