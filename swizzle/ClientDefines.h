//
//  ClientDefines.h
//  swizzle
//
//  Created by BaoBaoDaRen on 2019/9/2.
//  Copyright © 2019 Boris. All rights reserved.
//

#ifndef ClientDefines_h
#define ClientDefines_h

/**
 *  解决iOS10+Xcode8 NSLog下打印不全的问题...
 */
#ifdef DEBUG
#define SLog(format, ...) printf("class: <%p %s:(%d) > method: %s \n%s\n", self, [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, __PRETTY_FUNCTION__, [[NSString stringWithFormat:(format), ##__VA_ARGS__] UTF8String] )

#else
#define SLog(format, ...)
#endif



#endif /* ClientDefines_h */
