//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NUVideoProperties;

@interface NUVideoPropertiesJob
{
    id <NUVideoProperties> _videoProperties;
}

- (void).cxx_destruct;
- (id)result;
- (_Bool)prepare:(out id *)arg1;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsRenderStage;

@end
