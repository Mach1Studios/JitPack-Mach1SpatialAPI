# Mach1SpatialAPI

## Examples Explained
We included two example Android apps: 
 - `mach1-example` A creator example app with Mach1Encode and Mach1Decode implementation
 - `mach1-decode-example` A stripped down Mach1Decode example only, for apps requiring just spatial audio playback, designed as an integration focused around C++ and an internal audio system. This example is provided for reference for C++.

`mach1-example` app uses full java implementation via gradle
`mach1-decode-example` app uses cpp libs called via JNI

## Setup

### JitPack

Step1. Add it in your root build.gradle at the end of repositories: 

```
	allprojects {
		repositories {
			...
			maven { url 'https://jitpack.io' }
		}
	}
```

Step 2. Add the dependency

```
dependencies {
	        implementation 'com.github.mach1:Mach1SpatialLibs:Tag'
	}
```