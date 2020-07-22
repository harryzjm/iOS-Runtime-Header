//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXJSONObject.h>

#import <NewsUI/SXEmbedType-Protocol.h>

@class NSString, NSURL;

@interface NUEmbedData : SXJSONObject <SXEmbedType>
{
}

- (unsigned long long)autoPlayMediaWithValue:(id)arg1 withType:(int)arg2;
- (id)baseURLWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) unsigned long long autoPlayMedia; // @dynamic autoPlayMedia;
@property(readonly, nonatomic) NSURL *baseURL; // @dynamic baseURL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *enclosingHTML; // @dynamic enclosingHTML;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *javaScript; // @dynamic javaScript;
@property(readonly, nonatomic) double maximumWidth; // @dynamic maximumWidth;
@property(readonly, nonatomic) double minimumWidth; // @dynamic minimumWidth;
@property(readonly) Class superclass;

@end

