//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/NSObject-Protocol.h>

@class NSString, SFUDataRepresentation;

@protocol TSPIdentifiedDataRepresentation <NSObject>
- (_Bool)isLoaded;
- (_Bool)setDataRepresentation:(SFUDataRepresentation *)arg1 shouldCopy:(_Bool)arg2 error:(id *)arg3;
- (long long)identifier;

@optional
- (_Bool)fromExternalReference;
- (void)setRelativeDataPath:(NSString *)arg1;
- (void)setFileStateIdentifier:(NSString *)arg1;
@end
